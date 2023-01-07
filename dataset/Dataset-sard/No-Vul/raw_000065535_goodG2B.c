static void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_34_unionType VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR3;
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[50] = "";
            size_t VAR7, VAR8;
            VAR8 = strlen(VAR1);
            
            for (VAR7 = 0; VAR7 < VAR8; VAR7++)
            {
                VAR6[VAR7] = VAR1[VAR7];
            }
            VAR6[50-1] = ''; 
            FUN3(VAR1);
        }
    }
}