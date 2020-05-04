use std::io;

fn main() {
    let numbers = input_number();
    let n = numbers[0];
    for index in 1..n + 1 {
        if index % 3 == 0 || index % 10 == 3 {
            print!(" ");
            print!("{}", index);
        } else {
            let mut i = index;
            loop {
                i = i / 10;
                if i < 3 { break }
                else if i % 10 == 3 {
                    print!(" ");
                    print!("{}", index);
                    break
                }
            }
            
        }
    }
    println!("");
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
