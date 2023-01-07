static void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_34_unionType VAR2;
    char VAR3[10];
    char VAR4[10+1];
    
    VAR1 = VAR4;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            char VAR7[10+1] = VAR8;
            
            
            memmove(VAR1, VAR7, (strlen(VAR7) + 1) * sizeof(char));
            FUN2(VAR1);
        }
    }
}