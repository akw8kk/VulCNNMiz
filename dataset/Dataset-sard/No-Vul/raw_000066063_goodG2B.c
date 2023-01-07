static void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_unionType VAR2;
    char VAR3[100];
    VAR1 = VAR3;
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[50] = "";
            
            FUN2(VAR6, strlen(VAR1), "", VAR1);
            FUN3(VAR1);
        }
    }
}