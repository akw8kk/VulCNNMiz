void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    if(FUN2())
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1); 
        VAR5[100-1] = VAR4''; 
        
        wcsncat(VAR1, VAR5, 100);
        FUN3(VAR1);
    }
}