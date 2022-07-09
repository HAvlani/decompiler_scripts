
void next_file_name(void)

{
  ulong s;
  char *pcVar1;
  char cVar2;
  _Bool _Var3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  size_t *psVar9;
  undefined8 uVar10;
  size_t *psVar11;
  size_t sVar12;
  long lVar13;
  size_t sVar14;
  
  pcVar6 = outfile;
  pcVar7 = outfile_mid;
  sVar14 = suffix_length;
  psVar9 = next_file_name::sufindex;
  pcVar1 = suffix_alphabet;
  _Var3 = suffix_auto;
  if (outfile != (char *)0x0) {
    lVar13 = suffix_length - 1;
    if (suffix_length != 0) {
      psVar11 = next_file_name::sufindex + lVar13;
      do {
        sVar12 = *psVar11 + 1;
        *psVar11 = sVar12;
        if ((lVar13 == 0) && (_Var3 != false)) {
          if (pcVar1[*psVar9 + 1] == '\0') goto new_name;
          cVar2 = pcVar1[sVar12];
          *pcVar7 = cVar2;
          if (cVar2 != '\0') {
            return;
          }
          *psVar11 = 0;
          *pcVar7 = *pcVar1;
          break;
        }
        cVar2 = pcVar1[sVar12];
        pcVar7[lVar13] = cVar2;
        if (cVar2 != '\0') {
          return;
        }
        *psVar11 = 0;
        psVar11 = psVar11 + -1;
        pcVar7[lVar13] = *pcVar1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != -1);
    }
    uVar10 = dcgettext(0,"output file suffixes exhausted",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar10);
  }
new_name:
  sVar12 = next_file_name::outfile_length;
  if (next_file_name::outfile_length == 0) {
    sVar4 = strlen(outbase);
    sVar5 = 0;
    next_file_name::outbase_length = sVar4;
    if (additional_suffix != (char *)0x0) {
      sVar5 = strlen(additional_suffix);
    }
    next_file_name::outfile_length = sVar5 + sVar14 + sVar4;
    next_file_name::addsuf_length = sVar5;
    if (next_file_name::outfile_length + 1 < sVar4) {
LAB_00104a54:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    pcVar6 = (char *)xrealloc(pcVar6,next_file_name::outfile_length + 1);
    sVar14 = next_file_name::outbase_length;
    outfile = pcVar6;
    memcpy(pcVar6,outbase,next_file_name::outbase_length);
    pcVar7 = suffix_alphabet;
    psVar9 = next_file_name::sufindex;
  }
  else {
    suffix_length = sVar14 + 1;
    sVar14 = next_file_name::outfile_length + 2;
    s = next_file_name::outfile_length + 3;
    next_file_name::outfile_length = sVar14;
    if (s < next_file_name::outbase_length) goto LAB_00104a54;
    pcVar6 = (char *)xrealloc(pcVar6,s);
    psVar9 = next_file_name::sufindex;
    pcVar7 = suffix_alphabet;
    sVar14 = next_file_name::outbase_length + 1;
    pcVar1 = pcVar6 + next_file_name::outbase_length;
    next_file_name::outbase_length = sVar14;
    outfile = pcVar6;
    *pcVar1 = suffix_alphabet[*next_file_name::sufindex];
  }
  sVar5 = suffix_length;
  outfile_mid = pcVar6 + sVar14;
  pvVar8 = memset(outfile_mid,(int)*pcVar7,suffix_length);
  if (additional_suffix != (char *)0x0) {
    memcpy((void *)((long)pvVar8 + sVar5),additional_suffix,next_file_name::addsuf_length);
  }
  pcVar6[next_file_name::outfile_length] = '\0';
  rpl_free(psVar9);
  psVar9 = (size_t *)xcalloc(suffix_length,8);
  pcVar1 = numeric_suffix_start;
  next_file_name::sufindex = psVar9;
  if (numeric_suffix_start != (char *)0x0) {
    if (sVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! widen","src/split.c",0x199,"next_file_name");
    }
    sVar4 = strlen(numeric_suffix_start);
    sVar14 = suffix_length;
    memcpy(outfile_mid + (suffix_length - sVar4),pcVar1,sVar4);
    lVar13 = sVar4 - 1;
    if (sVar4 != 0) {
      do {
        psVar9[(sVar14 + lVar13) - sVar4] = (long)(pcVar1[lVar13] + -0x30);
        lVar13 = lVar13 + -1;
      } while (lVar13 != -1);
      return;
    }
  }
  return;
}

