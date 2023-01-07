void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_67_structType VAR2;
    char VAR3[50];
    char VAR4[100];
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}