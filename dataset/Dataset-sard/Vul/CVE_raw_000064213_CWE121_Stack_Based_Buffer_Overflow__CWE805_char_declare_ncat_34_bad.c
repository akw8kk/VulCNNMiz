void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_34_unionType VAR2;
    char VAR3[50];
    char VAR4[100];
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            
            strncat(VAR1, VAR7, 100);
            FUN2(VAR1);
        }
    }
}