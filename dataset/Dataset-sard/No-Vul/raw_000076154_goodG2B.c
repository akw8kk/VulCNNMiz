static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    
    VAR1 = VAR3;
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1);
            VAR5[100-1] = ''; 
            
            memcpy(VAR5, VAR1, strlen(VAR5)*sizeof(char));
            VAR5[100-1] = '';
            FUN2(VAR5);
        }
    }
}