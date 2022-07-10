extern unsigned int g_417a2a;
extern unsigned int g_417a54;
extern unsigned int g_417ca8;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_417a2a, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_417a54, 0x5));
    dcgettext(0x0, &g_417ca8, 0x5);
}
