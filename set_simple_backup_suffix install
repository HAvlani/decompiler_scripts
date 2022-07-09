extern char *simple_backup_suffix;

int set_simple_backup_suffix()
{
    char * v1;  // rax
    char * v2;  // rbx
    unsigned long long v3;  // rdi

    v2 = v3;
    if (v3 == 0)
    {
        v1 = getenv("SIMPLE_BACKUP_SUFFIX");
        v2 = v1;
        if (v1 == 0)
        {
            simple_backup_suffix = "~";
            return v1;
        }
    }
    if (v3 != 0 || v1 != 0)
    {
        if (*(v2) == 0)
        {
            simple_backup_suffix = "~";
            return v1;
        }
        v1 = last_component();
        if (v2 != v1)
        {
            simple_backup_suffix = "~";
            return v1;
        }
        else
        {
            simple_backup_suffix = v2;
            return v1;
        }
    }
}
