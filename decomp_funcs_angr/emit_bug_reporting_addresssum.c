extern unsigned int g_408c02;
extern unsigned int g_408c2c;
extern unsigned int g_408e80;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408c02, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_408c2c, 0x5));
    dcgettext(0x0, &g_408e80, 0x5);
}
