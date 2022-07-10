extern unsigned int g_406c82;
extern unsigned int g_406cac;
extern unsigned int g_406f00;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406c82, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_406cac, 0x5));
    dcgettext(0x0, &g_406f00, 0x5);
}
