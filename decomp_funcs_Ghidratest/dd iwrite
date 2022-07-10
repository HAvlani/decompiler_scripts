
idx_t iwrite(char *buf,idx_t size,int fd)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  __off_t _Var6;
  undefined8 uVar7;
  undefined4 in_register_00000014;
  size_t __n;
  char *pcVar8;
  idx_t len;
  
  if (((output_flags._1_1_ & 0x40) != 0) && (size < output_blocksize)) {
    uVar2 = rpl_fcntl(1,3,CONCAT44(in_register_00000014,fd));
    iVar3 = rpl_fcntl(1,4,(ulong)(uVar2 & 0xffffbfff));
    if ((iVar3 != 0) && (status_level != 1)) {
      uVar7 = quotearg_n_style_colon(0,3,output_file);
      pcVar8 = (char *)dcgettext(0,"failed to turn off O_DIRECT: %s",5);
      piVar5 = __errno_location();
      nl_error(0,*piVar5,pcVar8,uVar7);
    }
    o_nocache_eof = true;
    invalidate_cache(1,0);
    conversions_mask = conversions_mask | 0x8000;
  }
  len = 0;
  if (0 < size) {
    do {
      process_signals();
      iVar3 = conversions_mask;
      final_op_was_seek = false;
      __n = size;
      pcVar8 = buf;
      if ((conversions_mask & 0x10000U) == 0) {
LAB_00106168:
        sVar4 = write(1,buf + len,size - len);
        if (-1 < sVar4) {
          if (sVar4 != 0) goto LAB_0010611e;
          piVar5 = __errno_location();
          *piVar5 = 0x1c;
          break;
        }
        piVar5 = __errno_location();
        if (*piVar5 != 4) break;
      }
      else {
        do {
          if (*pcVar8 != '\0') goto LAB_00106168;
          pcVar8 = pcVar8 + 1;
          __n = __n - 1;
          if (__n == 0) goto LAB_001061b0;
        } while ((__n & 0xf) != 0);
        iVar1 = memcmp(buf,pcVar8,__n);
        if (iVar1 != 0) goto LAB_00106168;
LAB_001061b0:
        _Var6 = lseek(1,size,1);
        if (_Var6 < 0) {
          conversions_mask = iVar3 & 0xfffeffff;
          goto LAB_00106168;
        }
        final_op_was_seek = true;
        sVar4 = size;
LAB_0010611e:
        len = len + sVar4;
      }
    } while (len < size);
    if ((o_nocache != false) && (len != 0)) {
      invalidate_cache(1,len);
      return len;
    }
  }
  return len;
}

