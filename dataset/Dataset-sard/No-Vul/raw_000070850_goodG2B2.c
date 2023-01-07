static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[10+1] = VAR4;
        
        
        memcpy(VAR1, VAR3, (strlen(VAR3) + 1) * sizeof(char));
        FUN3(VAR1);
        free(VAR1);
    }
}