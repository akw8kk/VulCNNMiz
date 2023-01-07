void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_structType VAR2;
    char * VAR3 = (char *)FUN2(50*sizeof(char));
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    FUN3(VAR2);
}