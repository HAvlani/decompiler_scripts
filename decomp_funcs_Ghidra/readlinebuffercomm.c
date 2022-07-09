
linebuffer * readlinebuffer(linebuffer *linebuffer,FILE *stream)

{
  linebuffer *plVar1;
  
  plVar1 = readlinebuffer_delim(linebuffer,stream,'\n');
  return plVar1;
}

