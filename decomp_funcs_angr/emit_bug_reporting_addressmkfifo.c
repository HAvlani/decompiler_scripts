extern unsigned int g_407d62;
extern unsigned int g_407d8c;
extern unsigned int g_407fe0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407d62, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407d8c, 0x5));
    dcgettext(0x0, &g_407fe0, 0x5);
}