static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    if(VAR4==5)
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        
        
        memmove(VAR1, VAR5, (strlen(VAR5) + 1) * sizeof(char));
        FUN2(VAR1);
    }
}