void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    if(1)
    {
        
        wmemset(VAR1, VAR3'', 100-1); 
        VAR1[100-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        
        FUN2(VAR4, wcslen(VAR1), VAR3"", VAR1);
        FUN3(VAR1);
    }
}