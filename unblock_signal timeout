typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_407031;

int unblock_signal()
{
    char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0x20]
    unsigned int v4;  // edi
    struct_1 *v5;  // fs

    sigemptyset(((int)&v0));
    sigaddset(((int)&v0), v4);
    if (sigprocmask(0x1, ((int)&v0), 0x0) == 0)
    {
        return v1 ^ *(v5 + 0x28);
    }
    error(0x0, *(__errno_location()), dcgettext(0x0, &g_407031, 0x5));
    return v1 ^ *(v5 + 0x28);
}
