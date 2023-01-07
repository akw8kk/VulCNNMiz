void FUN1()
{
    char * VAR1;
    CWE126_Buffer_Overread__char_alloca_loop_34_unionType VAR2;
    char * VAR3 = (char *)FUN2(50*sizeof(char));
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    memset(VAR3, '', 50-1); 
    VAR3[50-1] = ''; 
    memset(VAR4, '', 100-1); 
    VAR4[100-1] = ''; 
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            size_t VAR7, VAR8;
            char VAR9[100];
            memset(VAR9, '', 100-1);
            VAR9[100-1] = ''; 
            VAR8 = strlen(VAR9);
            
            for (VAR7 = 0; VAR7 < VAR8; VAR7++)
            {
                VAR9[VAR7] = VAR1[VAR7];
            }
            VAR9[100-1] = '';
            FUN3(VAR9);
        }
    }
}