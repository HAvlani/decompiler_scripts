
char * find_backup_file_name(int dir_fd,char *file,backup_type backup_type)

{
  char *pcVar1;
  
  pcVar1 = backupfile_internal(dir_fd,file,backup_type,false);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

