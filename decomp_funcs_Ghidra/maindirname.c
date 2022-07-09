
int main(int argc,char **argv)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  size_t __n;
  undefined8 uVar4;
  
  bVar2 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  do {
    uVar4 = 0x102643;
    iVar3 = getopt_long(argc,argv,&DAT_001060cb,longopts,0);
    if (iVar3 == -1) {
      if (optind < argc) {
        do {
          pcVar1 = argv[optind];
          __n = dir_len(pcVar1);
          if (__n == 0) {
            pcVar1 = stdout->_IO_write_ptr;
            if (stdout->_IO_write_end < pcVar1 || stdout->_IO_write_end == pcVar1) {
              __overflow(stdout,0x2e);
            }
            else {
              stdout->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = '.';
            }
          }
          else {
            fwrite_unlocked(pcVar1,1,__n,stdout);
          }
          pcVar1 = stdout->_IO_write_ptr;
          if (pcVar1 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = (char)(-(uint)!bVar2 & 10);
          }
          else {
            __overflow(stdout,-(uint)!bVar2 & 10);
          }
          optind = optind + 1;
        } while (optind < argc);
        return 0;
      }
      uVar4 = dcgettext(0,"missing operand",5);
      error(0,0,uVar4);
      goto LAB_00102665;
    }
    if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    bVar2 = true;
  } while (iVar3 == 0x7a);
  if (iVar3 == -0x83) {
    version_etc((FILE *)stdout,"dirname","GNU coreutils",Version,"David MacKenzie","Jim Meyering",0,
                uVar4);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
LAB_00102665:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

