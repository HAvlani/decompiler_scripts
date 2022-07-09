
void sha1_init_ctx(sha1_ctx *ctx)

{
  *(undefined8 *)(ctx->total + 1) = 0;
  *(undefined8 *)ctx = 0xefcdab8967452301;
  *(undefined8 *)&ctx->C = 0x1032547698badcfe;
  *(undefined8 *)&ctx->E = 0xc3d2e1f0;
  return;
}

