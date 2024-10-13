const buttons=document.querySelectorAll('.button')
const body=document.querySelector('body')
buttons.forEach(function(button){
    console.log(button);
    button.addEventListener('click',function(e)
    {
        console.log(e);
        console.log(e.target);
        switch(e.target.id)
        {
            case 'Grey':body.style.backgroundColor=e.target.id;
            break;
            case 'White':body.style.backgroundColor=e.target.id;
            break;
            case 'Orange':body.style.backgroundColor=e.target.id;
            break;
            case 'Green':body.style.backgroundColor=e.target.id;
            break;
            default:console.log('invalid');
        }
    })
})