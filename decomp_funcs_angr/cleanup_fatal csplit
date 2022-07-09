typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int caught_signals;
extern char remove_files;

int cleanup_fatal()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x10]
    struct_0 *v4;  // fs

    v1 = *(v4 + 0x28);
    close_output_file();
    sigprocmask(0x0, &caught_signals, ((int)&v0));
    if (((long long)remove_files) != 0)
    {
        delete_all_files.part.0();
        sigprocmask(0x2, ((int)&v0), 0x0);
        exit(0x1); /* do not return */
    }
    sigprocmask(0x2, ((int)&v0), 0x0);
    exit(0x1); /* do not return */
}
