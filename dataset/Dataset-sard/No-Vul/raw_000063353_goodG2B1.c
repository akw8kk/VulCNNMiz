static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[10+1] = VAR5;
        
        
        memmove(VAR1, VAR4, (strlen(VAR4) + 1) * sizeof(char));
        FUN2(VAR1);
    }
}