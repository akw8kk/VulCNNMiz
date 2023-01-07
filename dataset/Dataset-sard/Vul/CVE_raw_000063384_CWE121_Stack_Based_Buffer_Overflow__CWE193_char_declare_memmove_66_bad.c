void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[10];
    char VAR4[10+1];
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}