void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    {
        char VAR4[10+1] = VAR5;
        
        
        strncpy(VAR1, VAR4, strlen(VAR4) + 1);
        FUN2(VAR1);
    }
}