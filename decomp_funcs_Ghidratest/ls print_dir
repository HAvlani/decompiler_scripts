
void print_dir(char *name,char *realname,_Bool command_line_arg)

{
  long lVar1;
  __dev_t _Var2;
  __ino_t _Var3;
  ignore_pattern *piVar4;
  ignore_pattern *piVar5;
  char cVar6;
  Hash_table *table;
  byte bVar7;
  int iVar8;
  int *piVar9;
  DIR *__dirp;
  __ino_t *p_Var10;
  __ino_t *p_Var11;
  undefined8 uVar12;
  undefined8 uVar13;
  dirent *pdVar14;
  char *pcVar15;
  size_t sVar16;
  char *pcVar17;
  size_t s_len;
  uintmax_t uVar18;
  filetype type;
  ino_t in_R8;
  long in_FS_OFFSET;
  bool bVar19;
  uintmax_t local_380;
  stat dir_stat;
  char buf [654];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar9 = __errno_location();
  *piVar9 = 0;
  __dirp = opendir(name);
  if (__dirp == (DIR *)0x0) {
    pcVar15 = (char *)dcgettext(0,"cannot open directory %s",5);
    file_failure(command_line_arg,pcVar15,name);
    goto LAB_0010bb8a;
  }
  if (active_dir_set != (Hash_table *)0x0) {
    iVar8 = dirfd(__dirp);
    in_R8 = 0x100;
    if (iVar8 < 0) {
      iVar8 = do_statx(-100,name,&dir_stat,0,0x100);
      _Var2 = dir_stat.st_dev;
      _Var3 = dir_stat.st_ino;
    }
    else {
      iVar8 = do_statx(iVar8,"",&dir_stat,0x1000,0x100);
      _Var2 = dir_stat.st_dev;
      _Var3 = dir_stat.st_ino;
    }
    if (iVar8 < 0) {
      pcVar15 = (char *)dcgettext(0,"cannot determine device and inode of %s",5);
      file_failure(command_line_arg,pcVar15,name);
      closedir(__dirp);
      goto LAB_0010bb8a;
    }
    dir_stat.st_dev = _Var2;
    dir_stat.st_ino = _Var3;
    p_Var10 = (__ino_t *)xmalloc(0x10);
    table = active_dir_set;
    *p_Var10 = _Var3;
    p_Var10[1] = _Var2;
    p_Var11 = (__ino_t *)hash_insert(table,p_Var10);
    if (p_Var11 == (__ino_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    if (p_Var10 != p_Var11) {
      rpl_free(p_Var10);
      uVar12 = quotearg_n_style_colon(0,3,name);
      uVar13 = dcgettext(0,"%s: not listing already-listed directory",5);
      error(0,0,uVar13,uVar12);
      closedir(__dirp);
      exit_status = 2;
      goto LAB_0010bb8a;
    }
    p_Var10 = (__ino_t *)dev_ino_obstack.next_free;
    if ((ulong)((long)dev_ino_obstack.chunk_limit - (long)dev_ino_obstack.next_free) < 0x10) {
      _obstack_newchunk(&dev_ino_obstack,0x10);
      p_Var10 = (__ino_t *)dev_ino_obstack.next_free;
    }
    dev_ino_obstack.next_free = (char *)(p_Var10 + 2);
    p_Var10[1] = dir_stat.st_dev;
    *p_Var10 = dir_stat.st_ino;
  }
  clear_files();
  if (recursive == false) {
    if (print_dir_name == false) goto LAB_0010bc99;
    if (print_dir::first == false) goto LAB_0010bd52;
LAB_0010bc2c:
    if (dired == false) goto LAB_0010bc40;
LAB_0010bd70:
    print_dir::first = false;
    dired_outbuf("  ",2);
  }
  else {
    if (print_dir::first != false) goto LAB_0010bc2c;
LAB_0010bd52:
    dired_outbyte('\n');
    if (dired != false) goto LAB_0010bd70;
LAB_0010bc40:
    print_dir::first = false;
  }
  pcVar15 = (char *)0x0;
  if ((print_hyperlink != false) &&
     (pcVar15 = canonicalize_filename_mode(name,CAN_MISSING), pcVar15 == (char *)0x0)) {
    pcVar17 = (char *)dcgettext(0,"error canonicalizing %s",5);
    file_failure(command_line_arg,pcVar17,name);
  }
  if (realname == (char *)0x0) {
    realname = name;
  }
  in_R8 = 1;
  quote_name(realname,dirname_quoting_options,-1,(bin_str *)0x0,true,&subdired_obstack,pcVar15);
  rpl_free(pcVar15);
  dired_outbuf(":\n",2);
LAB_0010bc99:
  local_380 = 0;
  do {
    *piVar9 = 0;
    pdVar14 = readdir(__dirp);
    if (pdVar14 == (dirent *)0x0) {
      if (*piVar9 == 0) break;
      pcVar15 = (char *)dcgettext(0,"reading directory %s",5);
      file_failure(command_line_arg,pcVar15,name);
      if (*piVar9 != 0x4b) break;
    }
    else {
      pcVar15 = pdVar14->d_name;
      piVar5 = ignore_patterns;
      if (ignore_mode != DT_CHR) {
        if (pdVar14->d_name[0] == '.') {
          if ((ignore_mode == DT_UNKNOWN) ||
             (pdVar14->d_name[(ulong)(pdVar14->d_name[1] == '.') + 1] == '\0')) goto LAB_0010bd28;
        }
        else {
          piVar4 = hide_patterns;
          if (ignore_mode == DT_UNKNOWN) {
            for (; piVar5 = ignore_patterns, piVar4 != (ignore_pattern *)0x0; piVar4 = piVar4->next)
            {
              iVar8 = fnmatch(piVar4->pattern,pcVar15,4);
              if (iVar8 == 0) goto LAB_0010bd28;
            }
          }
        }
      }
      for (; piVar5 != (ignore_pattern *)0x0; piVar5 = piVar5->next) {
        iVar8 = fnmatch(piVar5->pattern,pcVar15,4);
        if (iVar8 == 0) goto LAB_0010bd28;
      }
      type = unknown;
      bVar7 = pdVar14->d_type - 1;
      if (bVar7 < 0xe) {
        type = *(filetype *)(CSWTCH_1031 + (ulong)bVar7 * 4);
      }
      uVar18 = gobble_file(pcVar15,type,false,name,in_R8);
      local_380 = local_380 + uVar18;
      if ((((format == one_per_line) && (sort_type == sort_none)) && (print_block_size == false)) &&
         (recursive == false)) {
        sort_files();
        print_current_files();
        clear_files();
      }
    }
LAB_0010bd28:
    process_signals();
  } while( true );
  iVar8 = closedir(__dirp);
  if (iVar8 == 0) {
    sort_files();
  }
  else {
    pcVar15 = (char *)dcgettext(0,"closing directory %s",5);
    file_failure(command_line_arg,pcVar15,name);
    sort_files();
  }
  if (recursive != false) {
    extract_dirs_from_files(name,false);
  }
  if ((format == long_format) || (print_block_size != false)) {
    pcVar15 = human_readable(local_380,buf + 1,human_output_opts,0x200,output_block_size);
    sVar16 = strlen(pcVar15);
    cVar6 = eolbyte;
    pcVar15[-1] = ' ';
    bVar19 = dired != false;
    pcVar15[sVar16] = cVar6;
    if (bVar19) {
      dired_outbuf("  ",2);
    }
    pcVar17 = (char *)dcgettext(0,"total",5);
    s_len = strlen(pcVar17);
    dired_outbuf(pcVar17,s_len);
    dired_outbuf(pcVar15 + -1,(size_t)(pcVar15 + sVar16 + (1 - (long)(pcVar15 + -1))));
  }
  if (cwd_n_used != 0) {
    print_current_files();
  }
LAB_0010bb8a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

