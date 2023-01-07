void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[10];
    wchar_t VAR3[10+1];
    if(FUN2())
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR4''; 
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[10+1] = VAR6;
        
        
        wcsncpy(VAR1, VAR5, wcslen(VAR5) + 1);
        FUN3(VAR1);
    }
}