
void add_temp_dir(char *dir)

{
  if (temp_dir_count == temp_dir_alloc) {
    temp_dirs = (char **)x2nrealloc(temp_dirs,&temp_dir_alloc,8);
  }
  temp_dirs[temp_dir_count] = dir;
  temp_dir_count = temp_dir_count + 1;
  return;
}

