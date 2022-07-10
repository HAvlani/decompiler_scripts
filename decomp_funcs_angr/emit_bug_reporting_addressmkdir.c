extern unsigned int g_40af2f;
extern unsigned int g_40af59;
extern unsigned int g_40b1b0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40af2f, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40af59, 0x5));
    dcgettext(0x0, &g_40b1b0, 0x5);
}
