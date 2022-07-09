
_Bool do_move(char *source,char *dest,int dest_dirfd,char *dest_relname,cp_options *x)

{
  long lVar1;
  FILE *pFVar2;
  undefined uVar3;
  RM_status RVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined **ppuVar9;
  int __status;
  undefined *puVar10;
  long in_FS_OFFSET;
  undefined *puStackY288;
  char *pcStackY280;
  char *apcStackY272 [5];
  char *pcStackY232;
  char *pcStackY224;
  char *pcStackY216;
  char *pcStackY208;
  char *pcStackY200;
  undefined8 uStackY192;
  undefined8 uStackY184;
  undefined8 uStackY168;
  cp_options *pcStackY152;
  undefined8 uStackY144;
  _Bool copy_into_self;
  _Bool rename_succeeded;
  rm_options rm_options;
  char *dir [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uStackY144 = 0x104567;
  uVar3 = copy(source,dest,dest_dirfd,dest_relname,0,x,&copy_into_self,&rename_succeeded);
  if ((_Bool)uVar3 == false) {
LAB_00104576:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (_Bool)uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (copy_into_self != false) {
    uVar3 = 0;
    goto LAB_00104576;
  }
  uVar3 = rename_succeeded;
  if (rename_succeeded != false) goto LAB_00104576;
  rm_options.ignore_missing_files = false;
  rm_options.interactive = RMI_NEVER;
  rm_options._8_2_ = 0x100;
  rm_options.remove_empty_directories = true;
  rm_options.stdin_tty = false;
  rm_options._26_2_ = 0x100;
  rm_options.root_dev_ino = get_root_dev_ino((dev_ino *)dev_ino_buf_7505);
  if (rm_options.root_dev_ino != (dev_ino *)0x0) {
    rm_options.preserve_all_root = false;
    rm_options._26_2_ = rm_options._26_2_ & 0xff00 | (ushort)x->verbose;
    dir[1] = (char *)0x0;
    dir[0] = source;
    RVar4 = rm(dir,&rm_options);
    if (2 < RVar4 + 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("VALID_STATUS (status)","src/mv.c",0xe1,"do_move");
    }
    uVar3 = RVar4 != RM_ERROR;
    goto LAB_00104576;
  }
  pcVar6 = quotearg_style(shell_escape_always_quoting_style,"/");
  uVar7 = dcgettext(0,"failed to get attributes of %s",5);
  piVar8 = __errno_location();
  __status = 1;
  error(1,*piVar8,uVar7,pcVar6);
  pcVar6 = program_name;
  uStackY168 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStackY152 = x;
  uStackY144 = uVar7;
  if (__status != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,pcVar6);
    goto LAB_001046eb;
  }
  uVar7 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(1,uVar7,pcVar6,pcVar6,pcVar6);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n  -u, --update                 move only when the SOURCE file is newer\n                                 than the destination file or when the\n                                 destination file is missing\n  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  pFVar2 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar2);
  puStackY288 = &DAT_00116026;
  pcStackY280 = "test invocation";
  apcStackY272[0] = "coreutils";
  apcStackY272[1] = "Multi-call invocation";
  apcStackY272[4] = "sha256sum";
  apcStackY272[2] = "sha224sum";
  pcStackY224 = "sha384sum";
  apcStackY272[3] = "sha2 utilities";
  pcStackY232 = "sha2 utilities";
  pcStackY216 = "sha2 utilities";
  pcStackY208 = "sha512sum";
  pcStackY200 = "sha2 utilities";
  uStackY192 = 0;
  uStackY184 = 0;
  ppuVar9 = &puStackY288;
  do {
    puVar10 = (undefined *)ppuVar9;
    pcVar6 = *(char **)(puVar10 + 0x10);
    ppuVar9 = (undefined **)(puVar10 + 0x10);
    if (pcVar6 == (char *)0x0) break;
  } while (((*pcVar6 != 'm') || (pcVar6[1] != 'v')) || (pcVar6[2] != '\0'));
  puVar10 = *(undefined **)(puVar10 + 0x18);
  if (puVar10 == (undefined *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar5 = strncmp(pcVar6,"en_",3);
      if (iVar5 != 0) {
        puVar10 = &DAT_00116023;
        goto LAB_00104a9d;
      }
    }
    uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar10 = &DAT_00116023;
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00116023);
    pcVar6 = " invocation";
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar5 = strncmp(pcVar6,"en_",3);
      if (iVar5 != 0) {
LAB_00104a9d:
        pFVar2 = stdout;
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar2);
      }
    }
    uVar7 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00116023);
    pcVar6 = " invocation";
    if (puVar10 != &DAT_00116023) {
      pcVar6 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,puVar10,pcVar6);
LAB_001046eb:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}

