void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        wmemset(VAR2, VAR4'', 100-1); 
        VAR2[100-1] = VAR4''; 
    }
    {
        wchar_t VAR5[50] = VAR4"";
        
        FUN3(VAR5, wcslen(VAR2), VAR4"", VAR2);
        FUN4(VAR2);
    }
}