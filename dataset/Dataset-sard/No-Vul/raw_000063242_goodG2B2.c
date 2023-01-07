static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    if(FUN2())
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[10+1] = VAR5;
        
        strcpy(VAR1, VAR4);
        FUN3(VAR1);
    }
}