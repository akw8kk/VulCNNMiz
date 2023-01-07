static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    {
        char VAR4[50] = "";
        
        memcpy(VAR4, VAR1, strlen(VAR1)*sizeof(char));
        VAR4[50-1] = ''; 
        FUN2(VAR1);
    }
}