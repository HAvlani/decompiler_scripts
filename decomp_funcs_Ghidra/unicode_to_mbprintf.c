
long unicode_to_mb(uint code,anon_subr_long_char_ptr_size_t_void_ptr *success,
                  anon_subr_long_uint_char_ptr_void_ptr *failure,void *callback_arg)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *__tocode;
  size_t sVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  undefined uVar8;
  undefined uVar9;
  bool bVar10;
  byte bVar11;
  char *inptr;
  size_t inbytesleft;
  char *outptr;
  size_t outbytesleft;
  char inbuf [6];
  char outbuf [25];
  
  bVar11 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  uVar9 = unicode_to_mb::initialized == 0;
  if ((bool)uVar9) {
    __tocode = (byte *)locale_charset();
    lVar3 = 6;
    pbVar6 = __tocode;
    pbVar7 = (byte *)"UTF-8";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      uVar8 = *pbVar6 < *pbVar7;
      uVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
    } while ((bool)uVar9);
    bVar10 = (!(bool)uVar8 && !(bool)uVar9) == (bool)uVar8;
    unicode_to_mb::is_utf8 = (int)bVar10;
    if ((!bVar10) &&
       (unicode_to_mb::utf8_to_local = iconv_open((char *)__tocode,"UTF-8"),
       unicode_to_mb::utf8_to_local == (iconv_t)0xffffffffffffffff)) {
      unicode_to_mb::utf8_to_local = iconv_open("ASCII","UTF-8");
    }
    unicode_to_mb::initialized = 1;
  }
  if ((unicode_to_mb::is_utf8 == 0) && (unicode_to_mb::utf8_to_local == (iconv_t)0xffffffffffffffff)
     ) {
    lVar3 = (*failure)(code,"iconv function not usable",callback_arg);
  }
  else {
    if (code < 0x80) {
      inbuf[0] = (char)code;
      sVar5 = 1;
    }
    else {
      iVar2 = u8_uctomb_aux((uint8_t *)inbuf,code,6);
      sVar5 = (size_t)iVar2;
      if (iVar2 < 0) {
        lVar3 = (*failure)(code,"character out of range",callback_arg);
        goto LAB_00106327;
      }
    }
    if (unicode_to_mb::is_utf8 == 0) {
      outbytesleft = 0x19;
      inptr = inbuf;
      inbytesleft = sVar5;
      outptr = outbuf;
      sVar4 = iconv(unicode_to_mb::utf8_to_local,&inptr,&inbytesleft,&outptr,&outbytesleft);
      if ((((inbytesleft == 0) && (sVar4 != 0xffffffffffffffff)) &&
          ((sVar4 == 0 || (((long)outptr - (long)outbuf != 1 || (outbuf[0] != '?')))))) &&
         (sVar4 = iconv(unicode_to_mb::utf8_to_local,(char **)0x0,(size_t *)0x0,&outptr,
                        &outbytesleft), sVar4 != 0xffffffffffffffff)) {
        lVar3 = (*success)(outbuf,(long)outptr - (long)outbuf,callback_arg);
      }
      else {
        lVar3 = (*failure)(code,(char *)0x0,callback_arg);
      }
    }
    else {
      lVar3 = (*success)(inbuf,sVar5,callback_arg);
    }
  }
LAB_00106327:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}

