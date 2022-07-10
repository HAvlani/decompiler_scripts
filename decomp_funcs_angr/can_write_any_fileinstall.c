extern char can_write.3194;
extern char initialized.3193;

int can_write_any_file()
{
    unsigned long long v1;  // rax
    char v2;  // al

    if (initialized.3193 != 0)
    {
        return ((long long)can_write.3194);
    }
    v1 = geteuid();
    initialized.3193 = 1;
    v2 = ((char)(((int)v1) == 0));
    can_write.3194 = ((char)(((int)v1) == 0));
    return rax<8>;
}
