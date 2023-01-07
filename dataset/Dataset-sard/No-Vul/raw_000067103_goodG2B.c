static void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_67_structType VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR3;
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR4 = VAR1;
    FUN3(VAR2);
}