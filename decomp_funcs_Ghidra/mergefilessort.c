
size_t mergefiles(sortfile *files,size_t ntemps,size_t nfiles,FILE *ofp,char *output_file)

{
  char *file;
  size_t nfiles_00;
  char *message;
  long in_FS_OFFSET;
  FILE **fps;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  nfiles_00 = open_input_files(files,nfiles,&fps);
  if ((nfiles_00 < nfiles) && (nfiles_00 < 2)) {
    file = files[nfiles_00].name;
    message = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
    sort_die(message,file);
  }
  mergefps(files,ntemps,nfiles_00,ofp,output_file,fps);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return nfiles_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

