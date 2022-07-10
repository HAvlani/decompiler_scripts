extern char can_write.3194;
extern char initialized.3193;

int can_write_any_file()
{
    char v1;  // al
    unsigned long long v2;  // rax

    if (initialized.3193 != 0)
    {
        return ((long long)can_write.3194);
    }
    v2 = geteuid();
    initialized.3193 = 1;
    v1 = ((char)(((int)v2) == 0));
    can_write.3194 = ((char)(((int)v2) == 0));
    return rax<8>;
}
