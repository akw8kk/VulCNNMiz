static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[50];
    char VAR5[100];
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            strcat(VAR1, VAR6);
            FUN2(VAR1);
        }
    }
}