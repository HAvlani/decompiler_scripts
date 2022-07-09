
void free_token(re_token_t *node)

{
  uint uVar1;
  
  uVar1 = *(uint *)&node->field_0x8 & 0x400ff;
  if (uVar1 == 6) {
    free_charset((re_charset_t *)node->opr);
    return;
  }
  if (uVar1 != 3) {
    return;
  }
  rpl_free((void *)node->opr);
  return;
}

