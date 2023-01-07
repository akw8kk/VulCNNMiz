void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2((10)*sizeof(char));
    char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR6[10+1] = VAR7;
            
            
            memmove(VAR1, VAR6, (strlen(VAR6) + 1) * sizeof(char));
            FUN3(VAR1);
        }
    }
}