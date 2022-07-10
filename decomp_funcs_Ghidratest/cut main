
int main(int argc,char **argv)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  _Bool _Var4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  uchar *puVar11;
  code *cut_stream;
  uchar *fieldstr;
  bool bVar12;
  
  bVar5 = 0;
  bVar3 = false;
  bVar2 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  suppress_non_delimited = false;
  delim = '\0';
  have_read_stdin = false;
  fieldstr = (uchar *)0x0;
switchD_0010283d_caseD_6e:
  iVar6 = getopt_long(argc,argv,"b:c:d:f:nsz",longopts,0);
  if (iVar6 == -1) {
    pcVar10 = "you must specify a list of bytes, characters, or fields";
    if (fieldstr != (uchar *)0x0) {
      if (bVar2) {
        pcVar10 = "an input delimiter may be specified only when operating on fields";
        if ((bVar3) ||
           (pcVar10 = "suppressing non-delimited lines makes sense\n\tonly when operating on fields"
           , suppress_non_delimited != false)) goto LAB_00102a88;
        if (complement == false) {
          set_fields((char *)fieldstr,4);
        }
        else {
          set_fields((char *)fieldstr,6);
        }
LAB_0010299d:
        delim = '\t';
        if (output_delimiter_string == (char *)0x0) goto LAB_00102ab9;
      }
      else {
        set_fields((char *)fieldstr,~-(uint)(complement == false) & 2);
        if (!bVar3) goto LAB_0010299d;
        if (output_delimiter_string != (char *)0x0) {
          cut_stream = cut_fields;
          goto LAB_001029f9;
        }
LAB_00102ab9:
        output_delimiter_length = 1;
        output_delimiter_default = delim;
        output_delimiter_string = output_delimiter_default;
      }
      cut_stream = cut_bytes;
      if (!bVar2) {
        cut_stream = cut_fields;
      }
LAB_001029f9:
      if (optind == argc) {
        bVar5 = cut_file("-",cut_stream);
      }
      else {
        bVar5 = 1;
        for (; optind < argc; optind = optind + 1) {
          _Var4 = cut_file(argv[optind],cut_stream);
          bVar5 = bVar5 & _Var4;
        }
      }
      if ((have_read_stdin != false) && (iVar6 = rpl_fclose(stdin), iVar6 == -1)) {
        piVar7 = __errno_location();
        bVar5 = 0;
        error(0,*piVar7,&DAT_001080fa);
      }
      return (int)(bVar5 ^ 1);
    }
    goto LAB_00102a88;
  }
  if (iVar6 < 0x82) {
    if (0x61 < iVar6) goto code_r0x00102836;
    if (iVar6 == -0x83) {
      version_etc(stdout,"cut","GNU coreutils",Version,"David M. Ihnat","David MacKenzie",
                  "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_0010283d_caseD_65;
code_r0x00102836:
  switch(iVar6) {
  case 0x62:
  case 99:
    bVar2 = true;
  case 0x66:
    bVar12 = fieldstr == (uchar *)0x0;
    fieldstr = optarg;
    if (bVar12) goto switchD_0010283d_caseD_6e;
    pcVar10 = "only one list may be specified";
    break;
  case 100:
    if ((*optarg == '\0') || (optarg[1] == '\0')) {
      bVar3 = true;
      delim = *optarg;
      goto switchD_0010283d_caseD_6e;
    }
    pcVar10 = "the delimiter must be a single character";
    break;
  default:
    goto switchD_0010283d_caseD_65;
  case 0x6e:
    goto switchD_0010283d_caseD_6e;
  case 0x73:
    suppress_non_delimited = true;
    goto switchD_0010283d_caseD_6e;
  case 0x7a:
    line_delim = '\0';
    goto switchD_0010283d_caseD_6e;
  case 0x80:
    output_delimiter_string = (char *)optarg;
    output_delimiter_length = 1;
    if (*optarg != '\0') {
      uVar9 = 0xffffffffffffffff;
      puVar11 = optarg;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        uVar1 = *puVar11;
        puVar11 = puVar11 + (ulong)bVar5 * -2 + 1;
      } while (uVar1 != '\0');
      output_delimiter_length = ~uVar9 - 1;
    }
    goto switchD_0010283d_caseD_6e;
  case 0x81:
    complement = true;
    goto switchD_0010283d_caseD_6e;
  }
LAB_00102a88:
  uVar8 = dcgettext(0,pcVar10,5);
  error(0,0,uVar8);
switchD_0010283d_caseD_65:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

