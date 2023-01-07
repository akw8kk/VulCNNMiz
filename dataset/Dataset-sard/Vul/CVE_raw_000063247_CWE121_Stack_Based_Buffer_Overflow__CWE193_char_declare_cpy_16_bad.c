void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    while(1)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR4[10+1] = VAR5;
        
        strcpy(VAR1, VAR4);
        FUN2(VAR1);
    }
}