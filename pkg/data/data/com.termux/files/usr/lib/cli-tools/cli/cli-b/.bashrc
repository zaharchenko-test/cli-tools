    prompt_color='\[\033[1;32m\]'
    info_color='\[\033[1;34m\]'
    prompt_symbol=㉿

PS1=$prompt_color'┌──${VIRTUAL_ENV:+(\[\033[0;1m\]$(basename $VIRTUAL_ENV)'$prompt_color')}('$info_color'\u${prompt_symbol}\h'$prompt_color')-[\[\033[0;1m\]\w'$prompt_color']\n'$prompt_color'└─'$info_color'\$\[\033[0m\] '
