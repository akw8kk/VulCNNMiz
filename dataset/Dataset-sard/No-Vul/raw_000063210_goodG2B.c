static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        {
            char VAR5[10+1] = VAR6;
            
            
            strncpy(VAR1, VAR5, strlen(VAR5) + 1);
            FUN3(VAR1);
        }
    }
}