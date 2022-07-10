extern unsigned int g_417982;
extern unsigned int g_4179ac;
extern unsigned int g_417c00;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_417982, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4179ac, 0x5));
    dcgettext(0x0, &g_417c00, 0x5);
}
