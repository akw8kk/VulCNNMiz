static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(50*sizeof(char));
    char * VAR5 = (char *)FUN2(100*sizeof(char));
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
            
            memmove(VAR1, VAR6, 100*sizeof(char));
            VAR1[100-1] = ''; 
            FUN3(VAR1);
        }
    }
}