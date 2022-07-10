
ssize_t iread(int fd,char *buf,idx_t size)

{
  ssize_t sVar1;
  ssize_t sVar2;
  int *piVar3;
  char *fmt;
  int iVar4;
  
  do {
    process_signals();
    sVar2 = read(fd,buf,size);
    if (sVar2 == -1) {
      piVar3 = __errno_location();
      iVar4 = *piVar3;
      if (iVar4 == 0x16) {
        if (iread::prev_nread < 1) {
          iread::prev_nread = sVar2;
          return -1;
        }
        if (size <= iread::prev_nread) {
          iread::prev_nread = sVar2;
          return -1;
        }
        if ((input_flags._1_1_ & 0x40) == 0) {
          iread::prev_nread = sVar2;
          return -1;
        }
        *piVar3 = 0;
        iread::prev_nread = 0;
        return 0;
      }
    }
    else {
      if (-1 < sVar2) break;
      piVar3 = __errno_location();
      iVar4 = *piVar3;
    }
  } while (iVar4 == 4);
  if (0 < sVar2) {
    if (sVar2 < size) {
      process_signals();
    }
    else if (sVar2 < 1) {
      iread::prev_nread = sVar2;
      return sVar2;
    }
    sVar1 = iread::prev_nread;
    if (((warn_partial_read != false) && (iread::prev_nread < size)) && (0 < iread::prev_nread)) {
      if (status_level != 1) {
        fmt = (char *)dcngettext(0,"warning: partial read (%td byte); suggest iflag=fullblock",
                                 "warning: partial read (%td bytes); suggest iflag=fullblock",
                                 iread::prev_nread,5);
        nl_error(0,0,fmt,sVar1);
      }
      warn_partial_read = false;
    }
  }
  iread::prev_nread = sVar2;
  return sVar2;
}

