static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    VAR3 = 0; 
    VAR1 = FUN2(VAR1);
    {
        char VAR4[50] = "";
        
        memcpy(VAR4, VAR1, strlen(VAR1)*sizeof(char));
        VAR4[50-1] = ''; 
        FUN3(VAR1);
    }
}