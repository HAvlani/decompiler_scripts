
/* WARNING: Could not reconcile some variable overlaps */

void set_window_size(int rows,int cols,char *device_name)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  uint *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined *puStack264;
  char *pcStack256;
  byte *apbStack248 [5];
  char *pcStack208;
  char *pcStack200;
  char *pcStack192;
  char *pcStack184;
  char *pcStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack144;
  ulong uStack128;
  int *piStack120;
  undefined8 uStack112;
  code *pcStack104;
  ushort uStack96;
  ushort uStack94;
  long lStack88;
  ulong uStack80;
  ulong uStack72;
  undefined8 uStack64;
  winsize win;
  
  bVar18 = 0;
  uStack72 = (ulong)(uint)rows;
  uStack80 = (ulong)(uint)cols;
  lVar11 = *(long *)(in_FS_OFFSET + 0x28);
  uStack64 = 0x104ae5;
  iVar3 = ioctl(0,0x5413,&win);
  if (iVar3 != 0) {
    uStack64 = 0x104aee;
    piVar5 = __errno_location();
    if (*piVar5 != 0x16) {
      uStack64 = 0x104b50;
      uVar6 = quotearg_n_style_colon(0,3,device_name);
      uStack64 = 0x104b69;
      error(1,*piVar5,"%s",uVar6);
      goto LAB_00104b69;
    }
    win = 0;
  }
  if (-1 < rows) {
    win = win & 0xffffffffffff0000 | (ulong)(ushort)rows;
  }
  if (-1 < cols) {
    win._0_4_ = CONCAT22((short)cols,win.ws_row);
    win = win & 0xffffffff00000000 | (ulong)win._0_4_;
  }
  uStack64 = 0x104b20;
  iVar3 = ioctl(0,0x5414,&win);
  if (iVar3 == 0) {
    if (lVar11 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00104b69:
                    /* WARNING: Subroutine does not return */
    uStack64 = 0x104b6e;
    __stack_chk_fail();
  }
  uStack64 = 0x104b7d;
  uVar6 = quotearg_n_style_colon(0,3,device_name);
  uStack64 = 0x104b85;
  puVar7 = (uint *)__errno_location();
  uStack128 = 1;
  uVar12 = (ulong)*puVar7;
  uStack64 = 0x104b9d;
  error(1,uVar12,"%s",uVar6);
  uStack128 = uStack128 & 0xffffffff;
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack104 = (code *)0x104bcc;
  uStack64 = uVar6;
  iVar3 = ioctl(0,0x5413,&uStack96);
  if (iVar3 == 0) {
    if ((char)uStack128 == '\0') {
      pcStack104 = (code *)0x104c2e;
      wrapf("%d %d\n",(ulong)uStack96,(ulong)uStack94);
      current_col = 0;
    }
    else {
      pcStack104 = (code *)0x104c1b;
      wrapf("rows %d; columns %d;",(ulong)uStack96,(ulong)uStack94);
    }
  }
  else {
    pcStack104 = (code *)0x104bd5;
    piStack120 = __errno_location();
    if (*piStack120 != 0x16) {
      pcStack104 = (code *)0x104c49;
      uVar6 = quotearg_n_style_colon(0,3,uVar12);
      pcStack104 = (code *)0x104c62;
      error(1,*piStack120,"%s",uVar6);
      goto LAB_00104c62;
    }
    if ((char)uStack128 == '\0') {
      pcStack104 = (code *)0x104c76;
      uStack112 = quotearg_n_style_colon(0,3,uVar12);
      pcStack104 = (code *)0x104c8c;
      uVar6 = dcgettext(0,"%s: no size information for this device",5);
      iVar3 = 1;
      pcStack104 = usage;
      error(1,0,uVar6,uStack112);
      pcVar8 = program_name;
      uStack144 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      pcStack104 = (code *)device_name;
      if (iVar3 != 0) {
        uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(stderr,1,uVar6,pcVar8);
        goto LAB_00104cfa;
      }
      uVar6 = dcgettext(0,
                        "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                        ,5);
      __printf_chk(1,uVar6,pcVar8,pcVar8,pcVar8);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nMandatory arguments to long options are mandatory for short options too.\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5)
      ;
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",
                                 5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      if (tcsetattr_options == 1) {
        uVar6 = dcgettext(0,"on",5);
      }
      else {
        uVar6 = dcgettext(0,&DAT_0010d4d1,5);
      }
      uVar9 = dcgettext(0,
                        " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                        ,5);
      __printf_chk(1,uVar9,uVar6);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5)
      ;
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5)
      ;
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",
                                 5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]ixany      let any character restart output, not only start character\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"\nOutput settings:\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",
                                 5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]onocr      do not print carriage returns in the first column\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]echonl     echo newline even if not echoing other characters\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      uVar6 = dcgettext(0,
                        "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                        ,5);
      __printf_chk(1,uVar6,"erase, kill, werase, rprnt");
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]tostop     stop background jobs that try to write to the terminal\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,"\nCombination settings:\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      uVar6 = dcgettext(0,"   crt           same as %s\n",5);
      __printf_chk(1,uVar6,"echoe echoctl echoke");
      uVar6 = dcgettext(0,
                        "   dec           same as %s intr ^c erase 0177\n                 kill ^u\n"
                        ,5);
      __printf_chk(1,uVar6,"echoe echoctl echoke -ixany");
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
      fputs_unlocked(pcVar8,pFVar1);
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      uVar6 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
      __printf_chk(1,uVar6,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      uVar6 = dcgettext(0,
                        "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                        ,5);
      __printf_chk(1,uVar6," -iuclc -ixany -imaxbel -xcase");
      uVar6 = dcgettext(0,
                        "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                        ,5);
      __printf_chk(1,uVar6,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
                   "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
                   "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
      pFVar1 = stdout;
      pcVar8 = (char *)dcgettext(0,
                                 "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                                 ,5);
      fputs_unlocked(pcVar8,pFVar1);
      apbStack248[4] = (byte *)0x10d15b;
      puStack264 = &DAT_0010d11a;
      pcStack256 = "test invocation";
      apbStack248[0] = (byte *)0x10d194;
      apbStack248[1] = (byte *)0x10d12c;
      uStack168 = 0;
      uStack160 = 0;
      apbStack248[2] = (byte *)0x10d142;
      pcStack200 = "sha384sum";
      apbStack248[3] = (byte *)0x10d14c;
      pcStack208 = "sha2 utilities";
      pcStack192 = "sha2 utilities";
      pcStack184 = "sha512sum";
      pcStack176 = "sha2 utilities";
      ppuVar2 = &puStack264;
      do {
        puVar10 = (undefined *)ppuVar2;
        bVar16 = false;
        bVar17 = *(byte **)(puVar10 + 0x10) == (byte *)0x0;
        if (bVar17) break;
        lVar11 = 5;
        pbVar13 = &DAT_0010d05d;
        pbVar14 = *(byte **)(puVar10 + 0x10);
        do {
          if (lVar11 == 0) break;
          lVar11 = lVar11 + -1;
          bVar16 = *pbVar13 < *pbVar14;
          bVar17 = *pbVar13 == *pbVar14;
          pbVar13 = pbVar13 + (ulong)bVar18 * -2 + 1;
          pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
        } while (bVar17);
        ppuVar2 = (undefined **)(puVar10 + 0x10);
      } while ((!bVar16 && !bVar17) != bVar16);
      puVar15 = *(undefined1 **)(puVar10 + 0x18);
      if (puVar15 == (undefined1 *)0x0) {
        uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar8 = setlocale(5,(char *)0x0);
        if (pcVar8 != (char *)0x0) {
          iVar4 = strncmp(pcVar8,"en_",3);
          if (iVar4 != 0) {
            puVar15 = &DAT_0010d05d;
            goto LAB_00105b2a;
          }
        }
        uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
        puVar15 = &DAT_0010d05d;
        __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0010d05d);
        pcVar8 = " invocation";
      }
      else {
        uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar8 = setlocale(5,(char *)0x0);
        if (pcVar8 != (char *)0x0) {
          iVar4 = strncmp(pcVar8,"en_",3);
          if (iVar4 != 0) {
LAB_00105b2a:
            pFVar1 = stdout;
            pcVar8 = (char *)dcgettext(0,
                                       "Report any translation bugs to <https://translationproject.org/team/>\n"
                                       ,5);
            fputs_unlocked(pcVar8,pFVar1);
          }
        }
        uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
        pcVar8 = " invocation";
        __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0010d05d);
        if (puVar15 != &DAT_0010d05d) {
          pcVar8 = "";
        }
      }
      uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
      __printf_chk(1,uVar6,puVar15,pcVar8);
LAB_00104cfa:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
  }
  if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c62:
                    /* WARNING: Subroutine does not return */
  pcStack104 = (code *)0x104c67;
  __stack_chk_fail();
}

